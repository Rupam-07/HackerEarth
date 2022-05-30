//Follow me for solutions and you can contact me on rupamkarmakarcr7@gmail.com 
//please give it a star thank you


import java.io.*;
import java.util.*;
class TestClass
{

    static int compare(LinkedList<Character> A, LinkedList<Character> B){
        Iterator<Character> i = A.iterator();
        Iterator<Character> j = B.iterator();
        if(A.size() == 0){ return -1;}
        while (i.hasNext()) {
            char c = i.next();
            char d = j.next();
            if (c < d)
                return -1;
            else if (c > d)
                return 1;
        }
        return 0;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while(T-- > 0){
            int N; int K;
            N = sc.nextInt();
            K = sc.nextInt();
            String input = sc.next();
            LinkedList<Character> B = new LinkedList<>();
            
            int d = 0;
            int period = -1;
            LinkedList<Character> inter = new LinkedList<>();
            for(char c: input.toCharArray()){inter.add(c);}

            for(int i = 0; i < N;i++){
                if (compare(B, inter) < 0){
                    B = new LinkedList<>(inter);
                    d = i;
                    
                }else if (compare(B, inter) == 0){
                    period = i - d;
                    break;
                }
                inter.add(inter.removeFirst());
            }
            if(period == -1){
                System.out.println(d + (K - 1L ) * N);
            }else{
                System.out.println(d + ((K - 1L) * period));
            }
        }


    }
}