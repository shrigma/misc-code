import java.util.Scanner;
import java.awt.datatransfer.StringSelection;
import java.awt.Toolkit;
import java.awt.datatransfer.Clipboard;
public class Main
{
    public static void main(String[] args) 
	{
        Scanner UserInput = new Scanner(System.in);
        String text = "";
        String uwutext;
        System.out.println("all owo'd text will be saved to clipboard do not expect output\ninput q/Q to exit:");
        while(!(text.equals("q")))
        {
            text = UserInput.nextLine();
            text = text.toLowerCase();
            //o = owo | u = uwu | l&r = w | append uwu
            uwutext = (text.replace("o", "owo").replace("u", "uwu").replace('l', 'w').replace('r', 'w') + " uwu");
            StringSelection stringSelection = new StringSelection(uwutext);
            Clipboard clipboard = Toolkit.getDefaultToolkit().getSystemClipboard();
            clipboard.setContents(stringSelection, null);
        }
    }
}
