/*This is a tutorial through: 

https://www.codecademy.com/courses/learn-java/lessons/object-oriented-programming/exercises/inheritance 

The point of this excersice was to show understanding of inheritence, classes, onjects, constructors, instance variables,
and object oriented programming. This program inherits Animals which is an uncreated class assumed to be an inheritence with
stuff in it. Inheriting the checkStatus member function. */
class Dog extends Animal {
  
  int age;
  
	public Dog(int dogsAge) { 
    age = dogsAge;
  
  }
public void bark() {
  System.out.println("Woof!");
}
public void run(int feet) {
  
  System.out.println("Your dog ran " + feet + " feet!");
}
  public int getAge() {
    return age;
  }

	public static void main(String[] args) {
		
//spike is the object.
Dog spike = new Dog(5);
    spike.bark();
    spike.run(10);
    int spikeAge = spike.getAge();
    System.out.println(spikeAge);
//checkStatus inherited via Animal
    spike.checkStatus();
	}
}
