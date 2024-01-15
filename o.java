import java.util.Scanner;

public class FrogParty {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();
        
        for (int tc = 1; tc <= T; tc++) {
            int N = scanner.nextInt();
            int M = scanner.nextInt();
            int K = scanner.nextInt();
            
            int maxPortion = 0;
            for (int i = 0; i < N; i++) {
                int Xi = scanner.nextInt();
                if (Xi <= M && Xi <= K) {
                    maxPortion = Math.max(maxPortion, Xi);
                }
            }
            
            System.out.println("Case #" + tc + ": " + maxPortion);
        }
        
        scanner.close();
    }
}
