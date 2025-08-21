#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: mouth
//  action 1: the mouth opens
mouth.open();
//  action 2: the mouth closes
mouth.close();
//  action 3: the mouth chews
mouth.chew();

//  2)
//  Noun: car
//  action 1: the car accelerates 
car.accelerate();
//  action 2: the car slows down
car.slowDown();    
//  action 3: the car turns on the headlights
car.headlightsOn();
//  3)
//  Noun: cat
//  action 1: the cat meows
cat.meow();
//  action 2: the car purrs
cat.purr();
//  action 3: the cat hisses
cat.hiss();
//  4)
//  Noun: air conditioner
//  action 1: the air conditioner cools the room
airconditioner.coolRoom();
//  action 2: the air conditioner heats the room
airconditioner.heatRoom();
//  action 3: the air conditioner blows air
airconditioner.blowAir();
//  5)
//  Noun: washing machine
//  action 1: the washing machine washes clothes
washingmachine.washClothes();
//  action 2: the washing machine drains the water
washingmachine.drainWater();
//  action 3: the washing machine spins the clothes
washingmachine.spinClothes();
//  6)
//  Noun: dishwasher
//  action 1: the dishwasher cleans the dishes
dishwasher.cleanDishes();
//  action 2: the dishwasher dries the dishes
dishwasher.dryDishes();
//  action 3: the dishwasher beeps when done
dishwasher.beepWhenDone();
//  7)
//  Noun: coffee maker
//  action 1: the coffee maker brews coffee
coffeemaker.brewCoffee();
//  action 2: the coffee machine self cleans
coffeemaker.selfClean();
//  action 3: the coffe machine preserves my sanity
coffeemaker.preserveMySanity();
//  8)
//  Noun: daughter
//  action 1: my daughter laughs
daughter.laugh();
//  action 2: my daughter smiles
daughter.smile();
//  action 3: my daughter gets whatever she wants
daughter.getWhateverSheWants();
//  9)
//  Noun: lemon tree
//  action 1: the lemon tree grows
lemontree.grow();
//  action 2: the lemon tree produces lemons
lemontree.produceLemons();
//  action 3: the lemon tree drops ripe lemons
lemontree.dropRipeLemons();
//  10)
//  Noun: mailman
//  action 1: the mailman delivers mail
mailman.deliverMail();
//  action 2: the mailman refuses to take mail
mailman.refuseToTakeMail();
//  action 3: the mailman gets annoyed
mailman.getAnnoyed();
#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main() {
  std::cout << "good to go" << std::endl;
  return 0;
}
