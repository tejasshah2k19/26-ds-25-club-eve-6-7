
import java.util.LinkedList;

public class LinkedListDemo2 {

    public static void main(String[] args) {
        LinkedList<Integer> list = new LinkedList<Integer>();
        list.addLast(10);
        list.addLast(20);
        list.addLast(30);
        list.addLast(40);
        list.addLast(50);

        System.out.println(list.size());//5 

        System.out.println("List => "+list);
        list.add(2,600); //10 20 600 30 40 50 

        System.out.println("List => "+list);//10 20 600 30 40 50 

        // //? 
        // list.remove(4);
        // list.add(4,400);
        list.set(4, 400);
        System.out.println(list);
        
    }
}
