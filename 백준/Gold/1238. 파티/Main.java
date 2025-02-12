import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

class Node implements Comparable<Node> {
    int end, cost;

    Node(int end, int cost) {
        this.end = end;
        this.cost = cost;
    }

    @Override
    public int compareTo(Node o) {
        return this.cost - o.cost;
    }
}

public class Main {
    static int N, M, X;
    static List<List<Node>> graph;
    static int[] dijkstra(int start) {
        PriorityQueue<Node> pq = new PriorityQueue<>();
        int[] dist = new int[N + 1];
        Arrays.fill(dist, Integer.MAX_VALUE);
        dist[start] = 0;
        pq.offer(new Node(start, 0));

        while (!pq.isEmpty()) {
            Node temp = pq.poll();

            if (temp.cost > dist[temp.end]) continue; // 이미 더 작은 비용으로 방문된 경우 스킵

            for (Node next : graph.get(temp.end)) {
                int newCost = dist[temp.end] + next.cost;
                if (newCost < dist[next.end]) {
                    dist[next.end] = newCost;
                    pq.offer(new Node(next.end, newCost));
                }
            }
        }
        return dist;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        X = Integer.parseInt(st.nextToken());

        graph = new ArrayList<>();
        for (int i = 0; i <= N; i++) {
            graph.add(new ArrayList<>());
        }

        for (int i = 0; i < M; i++) {
            st = new StringTokenizer(br.readLine());
            int start = Integer.parseInt(st.nextToken());
            int end = Integer.parseInt(st.nextToken());
            int cost = Integer.parseInt(st.nextToken());
            graph.get(start).add(new Node(end, cost));
        }

        int maxTime = 0;
        int[] toX = dijkstra(X);
        for (int i = 1; i <= N; i++) {
            if (i == X) continue;
            int[] fromI = dijkstra(i);
            maxTime = Math.max(maxTime, fromI[X] + toX[i]);
        }

        System.out.println(maxTime);
    }
}
