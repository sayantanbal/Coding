const marvel_heros = ["thor", "Ironman", "spiderman"];
const dc_heros = ["superman", "flash", "batman"];

// marvel_heros.push(dc_heros)

// console.log(marvel_heros);
// console.log(marvel_heros[3][1]);

// const allHeros = marvel_heros.concat(dc_heros)
// console.log(allHeros);

const all_new_heros = [...marvel_heros, ...dc_heros]; // ... is spread operator

// console.log(all_new_heros);

const another_array = [1, 2, 3, [4, 5, 6], 7, [6, 7, [4, 5]]];

const real_another_array = another_array.flat(Infinity); // Infinity is used to flatten the array to any level
console.log(real_another_array);
// flat() method is used to flatten the array, i.e. it removes the nested arrays and returns a single array.

// console.log(Array.isArray("Hitesh"));
// console.log(Array.from("Hitesh")); // converts to an Array
// console.log(Array.from({
//     name: "hitesh",
//   })
// ); 
// as we're not specifying what to convert from, i.e. convert keys to array or convert key values to array it returns a empty string.

let score1 = 100;
let score2 = 200;
let score3 = 300;

// console.log(Array.of(score1, score2, score3)); // makes array using values