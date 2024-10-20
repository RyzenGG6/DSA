public Class empl{
    private int empl_id=1;
private string name;

public int getid(){
    return empl_id;
}
} 

public Class test{
    public static void main(String args[]){
        empl n=new empl;
        System.out.println(empl.getid());
    }
}