import java.util.LinkedList;
public class LinkedListDemo
{
    public static void main(String[] args) {

        LinkedList<Integer> list = new LinkedList<>();

        list.add(10); // first node : head 
        list.add(20); // insert at then end 
        list.addLast(30);//10 20 30 
        list.addFirst(40);//40 10 20 30 
        list.add(2,200);//40 10 200 20 30 

        System.out.println(list);//[40 10 200 20 30]
        System.out.println("List items => ");
        for (Integer x:list) {
            System.out.println(x);
        }
        //

        //40 10 200 20 30 

        //remove last element 
        list.removeLast();//30

        //remove beg element 
        list.remove();//40  removeFirst()

        //10 200 20
        list.remove(2);//20 
        
        System.out.println(list);//10 200


    }
}

//LinkedList 
