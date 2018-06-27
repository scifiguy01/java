/* https://www.codecademy.com/courses/learn-java/lessons/object-oriented-programming/exercises/generalizations-oop-java
This code is partly created from codecademy, but I altered the code to meet the objectives. The point of this code is
To show understanding of inheritence, objects and classes.*/

//Beverage is inherited
class Coffee extends Beverage {
	
	public Coffee() {

	}
	
	public void addSugar(int cubes) {

		System.out.println("You added " + cubes + " sugar cubes.");

	}

	public static void main(String[] args) {
Coffee myOrder = new Coffee();
    myOrder.addSugar(2);
    myOrder.isFull();
	}
}