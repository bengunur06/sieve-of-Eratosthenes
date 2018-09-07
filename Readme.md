# Sieve of Eratosthenes

* This algortihm is efficient way to find all prime nummbers to given limit 
* complexity of the algorithm is O(n(logn)(loglogn)) bit operations

* it works like this :
*All of the boxes are filled with 1 at the begining .Algorithm instruct us to find the  first smallest prime number and fills 0 to the power of that prime number then finds another unfilled box and if it isn't filled it fills the power of them 0 too  and continue like this ,till to the limitnumber so the boxes filled with  1 remains and they are the prime numbers that are below the given number .*

## compiled with gcc 
`$ gcc sieve.c `
