
import java.util.ArrayList;

public class ArrayListDemo {
    public static void main(String[] args) {

        ArrayList<Integer> list = new ArrayList<>();//[] => 10  [ 0:5 1:ram  ]
        // Integer array[] => size => 10  
        list.add(5); 
        list.add(6);
        list.add(7);

        list.remove(0); //0th index remove 

        System.out.println(list);


        //take 5 numbers from user and store in arraylist -> print 

        System.out.println(list.get(0));//0th index 5 

        System.out.println(list.get(1));//0th index 5 


        //loop
        for(int i=0;i<list.size();i++){
            System.out.println(list.get(i));
        }        
        //sum of all elements 
        // 1 2 3 4 5 => 15 
         
    }
}
