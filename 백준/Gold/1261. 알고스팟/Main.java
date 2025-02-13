import java.util.PriorityQueue;
import java.util.Scanner;

class Node implements Comparable<Node> {
    int x, y, brakeNum;
    Node(int x, int y, int brakeNum) {
        this.x = x;
        this.y = y;
        this.brakeNum = brakeNum;
    }
    @Override
    public int compareTo(Node o) {
        return Integer.compare(this.brakeNum, o.brakeNum);
    }
}
// BOJ_1261
public class Main {
    static int N;
    static int M;
    static int[][] graph;
    static int[][] visited;

    public static int bfs(int startX, int startY) {
        int[][] delta = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        PriorityQueue<Node> pq = new PriorityQueue<>();
        pq.offer(new Node(startX, startY, 0));
        visited[startX][startY] = 0;

        while (!pq.isEmpty()) {
            Node temp = pq.poll();
            int x = temp.x;
            int y = temp.y;
            int brakeNum = temp.brakeNum;

            // 끝에 도달한 경우
            if (x == N-1 && y == M-1){
                return brakeNum;
            }

            for (int[] d : delta) {
                int nx = x + d[0];
                int ny = y + d[1];
                // 유효한 범위인지 확인
                if (nx >= 0 && ny >= 0 && nx < N && ny < M) {
                    int nextBrakeNum = brakeNum + graph[nx][ny];

                    // 더 적은 벽을 부순 경우에만 갱신
                    if (visited[nx][ny] > nextBrakeNum) {
                        visited[nx][ny] = nextBrakeNum;
                        pq.offer(new Node(nx, ny, nextBrakeNum));
                    }
                }

            }
        }
        return -1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        M = sc.nextInt();
        N= sc.nextInt();
        graph = new int[N][M];
        visited = new int[N][M];
        for (int i = 0; i < N; i++) {
            String line = sc.next();
            for (int j = 0; j < M; j++) {
                graph[i][j] = line.charAt(j) - '0';
                visited[i][j] = Integer.MAX_VALUE;
            }
        }

        System.out.println(bfs(0,0));
    }
}