// Creating an Array and Initializing with Values
let a = ["HTML", "CSS", "JS"];

// Add Element to the end of Array
a.push("Node.js");

// Add Element to the beginning
a.unshift("Web Development");

console.log(a);
// Removes and returns the last element
// let lst = a.pop();
// console.log("After Removing the last: " + a);

// // Removes and returns the first element
// let fst = a.shift();
// console.log("After Removing the First: " + a);

// Removes 2 elements starting from index 1


// a.splice(1, 2);
// console.log("After Removing 2 elements starting from index 1: " + a);

for (let i = 0; i < a.length; i++) {
    console.log(a[i])
}
console.log(a.toString());
