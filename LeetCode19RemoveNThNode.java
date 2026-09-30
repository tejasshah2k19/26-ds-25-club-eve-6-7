import java.util.LinkedList;

public class LeetCode19RemoveNThNode {
    public static void main(String[] args) {
   
        LinkedList<Integer> list =new LinkedList<Integer>();
        list.add(10);
        list.add(20);
        list.add(30);
        list.add(40);
        list.add(50);

        int n = 2 ; 
        System.out.println(list);//10 20 30 40 50 
        //logic 
        System.out.println(list);//10 20 30  50 
        
    }
}
