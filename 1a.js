let obj = { a: 1 };
Object.freeze(obj);
obj.a = 2;
console.log(obj.a);