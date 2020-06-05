//1216	Getline One	Accepted	C#	0.236	16/11/2019 18:14:06
using System; 
 
class URI {
 
    static void Main(string[] args) { 
        string name;
        double total = 0, k=0;
        int dist;
        
        while((name = Console.ReadLine()) != null && name != ""){
            dist = Int32.Parse( System.Console.ReadLine().Trim());
            
            total += dist;
            k++;
        }
 
        Console.Write("{0:0.0}\n", total/k);
    }
     
}
