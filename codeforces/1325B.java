import java.util.HashSet;
import java.util.scanner;
import java.util.set;

public class 1325B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();


        while(t-->=1){
            int n = sc.nextInt();
            long a[] = new long[n];
            set<Long> d = new HashSet<>();
            for( int i =0;i<n;i++){
                a[i] = sc.nextLong();
                d.add(a[i]);
            }
            System.out.println(d.size());
        }
    }
}