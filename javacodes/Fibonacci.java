import java.util.Scanner;

public class FibonacciSeries {

   public static void displayFibonacci(int term) {

      // declare variables
      int t1 = 0; // first term
      int t2 = 1; // second term	
      int n; // nth term
      int i = 1; // iterator variable

      while(i <= term) {

         // display ith terms
         System.out.print(t1+"\t");

         // update term values
         n = t1 + t2;
         t1 = t2;
         t2 = n;

         // increase iterator variable
         // value by 1
         i++;
      }
   }

   public static void main(String[] args) {

      int terms; // number of terms

      // Read number of terms to display
      Scanner scan = new Scanner(System.in);
      System.out.print("Enter number of terms: ");
      terms = scan.nextInt();

      // display Fibonacci series
      System.out.println("The Fibonacci series: ");
      displayFibonacci(terms);

      // close Scanner class object
      scan.close();
   }
}