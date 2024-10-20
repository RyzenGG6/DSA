// Online Java Compiler
// Use this editor to write, compile and run your Java code online
import java.util.*;
class Innerinter {
    public static void main(String[] args) {
       HashMap<Integer,String>map=new HashMap<>();
       map.put(5,"hai");
           map.put(1,"hai");
           
           List<Map.Entry<Integer,String>>list=new ArrayList<>(map.entrySet());
           list.sort(Map.Entry.comparingByValue());
           
       System.out.println(map);
    }
}