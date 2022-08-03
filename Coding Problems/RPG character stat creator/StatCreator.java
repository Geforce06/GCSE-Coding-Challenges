import java.io.*;
import java.util.*;

class character {
	String name; //a
	int level;
	character(){
		level = 1;
	}
	void attack(){
		System.out.println("ATTACKKK!");
	}
}
public class StatCreator {
	public static void main(String[] args) throws IOException {
		BufferedReader statstxt = new BufferedReader(new FileReader("txtfiles/entrymsg.txt"));
		while(statstxt.ready()) {
			System.out.println(statstxt.readLine());
		}
		boolean newstats;
		boolean reviewstats;
		
		Scanner input = new Scanner(System.in);
		character p1 = new character();
		try {
			String a = input.nextLine(); //In as a string
			int b = Integer.parseInt(a); //conversion
			if (b == 1) {
				System.out.println("Please enter in a name for your character: ");
				//p1.name = input.nextLine();
				//System.out.println(p1.name+" "+p1.level);
				//stats = new FileWriter("stats.txt");
			} else if(b == 2) {
				//Code here for the review
			} else {
				System.out.println("Please pick either 1 or 2.");
		  }
    } catch (Exception e) {
        System.out.println(p1.name);  
    }
	}
}
