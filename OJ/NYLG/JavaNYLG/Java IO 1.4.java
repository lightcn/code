import java.io.*;
import java.util.*;

public class Main
{
    public static void main (String args[]) throws Exception
    {
        BufferedReader stdin =
                new BufferedReader(
                        new InputStreamReader(System.in));

        String line = stdin.readLine();
        StringTokenizer st = new StringTokenizer(line);
        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());
        System.out.println(a+b);
    }
}