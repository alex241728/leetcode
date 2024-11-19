function createCounter(n: number): () => number {
    let count = n;
    return function() {
        return count++;
    }
}

let counter: (() => number) | undefined = undefined;
/*
    Input: 
    n = 10 
    ["call","call","call"]
    Output: [10,11,12]
    Explanation: 
    counter() = 10 // The first time counter() is called, it returns n.
    counter() = 11 // Returns 1 more than the previous time.
    counter() = 12 // Returns 1 more than the previous time.
*/
counter = createCounter(10);
console.log(counter());
console.log(counter());
console.log(counter());

/*
    Input: 
    n = -2
    ["call","call","call","call","call"]
    Output: [-2,-1,0,1,2]
    Explanation: counter() initially returns -2. Then increases after each sebsequent call.
*/
counter = createCounter(-2);
console.log(counter());
console.log(counter());
console.log(counter());
console.log(counter());
console.log(counter());