import java.io.*;
import java.util.*;
public class Main {
    public static void main(String[] args) throws Exception {
        FastScanner fs = new FastScanner();
        StringBuilder out = new StringBuilder();
        long t= fs.nextLong();
        while (t--> 0) {
            long n = fs.nextLong();
            long x = fs.nextLong();
            ArrayList<Long> v = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                if (( (i | x)!= x)){
                    while (v.size() < n) v.add(0L);
                    break;
                }
                v.add((long)i);
            }
            long curror= 0;
            for (long u : v) {
                curror |= u;
            }
            if (curror != x) {
                v.remove(v.size()-1);
                v.add(x);
            }
            for (long a : v) {
                out.append(a).append(' ');
            }
            out.append('
');
        }
        System.out.print(out);
    }
    static class FastScanner {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        String next() throws IOException {
            while (st == null || !st.hasMoreElements()) {
                st = new StringTokenizer(br.readLine());
            }
            return st.nextToken();
        }
        long nextLong() throws IOException {
            return Long.parseLong(next());
        }
    }
}