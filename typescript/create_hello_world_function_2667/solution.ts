function createHelloWorld() {
    return function(...args: any[]): string {
        return "Hello World"
    };
};

const f: ((...args: any[]) => string) = createHelloWorld();

/*
    Input: args = []
    Output: "Hello World"
    Explanation:
    const f = createHelloWorld();
    f(); // "Hello World"

    The function returned by createHelloWorld should always return "Hello World".
*/
console.log(f());

/*
    Input: args = [{},null,42]
    Output: "Hello World"
    Explanation:
    const f = createHelloWorld();
    f({}, null, 42); // "Hello World"

    Any arguments could be passed to the function but it should still always return "Hello World".
*/
console.log(f([{}, null, 42]));