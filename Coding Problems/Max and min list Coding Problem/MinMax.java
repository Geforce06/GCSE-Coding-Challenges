import java.io.*;

class MinMax {
    public static void main(String[] args) throws IOException {
		
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Please enter in how many numbers you want in the list: ");
        int n = Integer.parseInt(br.readLine());
        System.out.println("You want "+n+" numbers in the list.");
        int min = Integer.MAX_VALUE;
        int max = Integer.MIN_VALUE;
        for (int i = 0; i < n; i++) {

            int number = Integer.parseInt(br.readLine());
            if (number < min) min = number;
            if (number > max) max = number;
        }
        System.out.println("min: " + min);
        System.out.println("max: " + max);
    }
}