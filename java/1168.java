//1168	LED	Accepted	Java 8	0.160	16/11/2019 17:56:40
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {
    
    public static void main(String[] args) throws IOException {
        
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        String leds;
        long sum = 0;
        int n = Integer.parseInt(in.readLine()), i=0;
        
        while(i<n){
            
            leds=in.readLine();
            
            for(int j=0; j<leds.length(); j++){
                
                switch(leds.charAt(j)){
                case '1':
                    sum += 2;
                    break;
                case '7':
                    sum += 3;
                    break;
                case '4':
                    sum += 4;
                    break;
                case '2':
                case '3':
                case '5':
                    sum += 5;
                    break;
                case '6':
                case '9':
                case '0':
                    sum += 6;
                    break;
                case '8':
                    sum += 7;
                    break;
                }
            }
            
            System.out.println(sum + " leds");
            
            sum = 0;
            i++;
        }
        
        
    }
    
}