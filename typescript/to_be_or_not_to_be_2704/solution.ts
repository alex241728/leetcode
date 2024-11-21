type ToBeOrNotToBe = {
    toBe: (val: any) => boolean;
    notToBe: (val: any) => boolean;
};

function expect(val: any): ToBeOrNotToBe {
    const throwError = (error: string) => {
        throw new Error(error);
    }

    return {
        toBe: (v) => v === val || throwError("Not Equal"),
        notToBe: (v) => v !== val || throwError("Equal")
    }
};

/*
    Input: func = () => expect(5).toBe(5)
    Output: {"value": true}
    Explanation: 5 === 5 so this expression returns true.
*/
console.log(expect(5).toBe(5));

/*
    Input: func = () => expect(5).notToBe(null)
    Output: {"value": true}
    Explanation: 5 !== null so this expression returns true.
*/
console.log(expect(5).notToBe(null));

/*
    Input: func = () => expect(5).toBe(null)
    Output: {"error": "Not Equal"}
    Explanation: 5 !== null so this expression throw the error "Not Equal".
*/
console.log(expect(5).toBe(null));