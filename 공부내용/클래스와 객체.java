class Animal {
    String name;
    
    public void setName(String name) {
        this.name = name;
    }
}

public class Main {
    public static void main(String[] args) {
        Animal cat = new Animal();
        cat.setName("Boby");
        
        Animal dog = new Animal();
        dog.setName("Happy");
        
        System.out.println(cat.name);
        System.out.println(dog.name);
    }
}
