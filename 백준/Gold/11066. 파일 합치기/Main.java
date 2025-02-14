import java.util.Scanner;


// BOJ_11066
public class Main {
    static int T;
    static int[] sum;
    static int[][] dp;

    public static void executeDp(int k, int[] nums){
        for (int i = 1; i <= k; i++){
            for (int from = 1; from + i <= k; from++){
                int to = from + i;
                dp[from][to] = Integer.MAX_VALUE;
                for(int divide = from; divide < to; divide++){
                    dp[from][to] = Math.min(
                                    dp[from][to],
                                    dp[from][divide]+dp[divide+1][to]+sum[to]-sum[from-1]
                    );
                }
            }
        }
        System.out.println(dp[1][k]);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        T = sc.nextInt();
        for (int t = 0; t < T; t++) {
            int k = sc.nextInt();
            int[] nums = new int[k+1];
            dp = new int[k+1][k+1];
            sum = new int[k+1];

            for (int i = 1; i <= k; i++) {
                nums[i] = sc.nextInt();
                sum[i] = sum[i-1]+nums[i];
            }
            executeDp(k, nums);
        }
    }
}