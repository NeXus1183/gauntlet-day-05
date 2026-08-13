# When NOT to use a pattern

## Singleton, refuse when: It could be a global variable/function instead and will affect testing cause other scripts rely on it existing
Instead: Pass refernces of classes you need to the constructor of the object instead
Testability cost: If any test objects rely on the singleton, it will affect everything that requires it. Thus you have to make sure the singleton exists before the things that rely on it exist

## Factory type, refuse when: It adds another layer of interaction and checks to what a normal constructor can acheive and if you need the object type to use for something
Instead: Return the base type of the object an use virtual functions to overwrite the behaviour
Testability cost: You would have to update the factory whenever you would want to spawn new types of objects

## Facade over subsystem, refuse when: You require more specific control over certain functions
Instead: Use function calls normally unless you need them to run in a specific order
Testability cost: You cant easily maniuplate the functions or data when the facade is running

## Visitor, refuse when: You need to update the object types with new functions or variables
Instead: Use virtual methods instead to overwrite
Testability cost: You have to edit every visitor if the object hierarchy grows