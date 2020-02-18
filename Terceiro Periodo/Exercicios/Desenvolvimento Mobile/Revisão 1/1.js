/*
  QUESTÃO 1
*/
function arrayOfObjects() {
  let vetor = [];

  let arrNames = [
    "Tomasz Salinas",
    "Amelia-Rose Strong",
    "Mairead Pearce",
    "Tylor Hussain",
    "Marisa Pratt",
    "Elwood Arroyo",
    "Eileen Bond",
    "Kailum Sanford",
    "Jax Drummond",
    "Onur Fowler"
  ];

  let arrAges = [10, 15, 17, 20, 50, 38, 22, 55, 42, 39];

  for (let i = 0; i < 10; i++) {
    vetor.push({
      name: arrNames[i],
      age: arrAges[i]
    });
  }

  return vetor;
}
console.log(arrayOfObjects());

/*
  QUESTÃO 2
*/
function sortByName(array) {
  return array.sort((a, b) => (a.name < b.name ? -1 : a.name > b.name ? 1 : 0));
}
console.log(sortByName(arrayOfObjects()));

function sortByAge(array) {
  return array.sort((a, b) => (a.age > b.age ? 1 : -1));
}
console.log(sortByAge(arrayOfObjects()));

/*
  QUESTÃO 3
*/
function highestAndLowestAge(array) {
  let highest = Math.max.apply(
    Math,
    array.map(function(obj) {
      return obj.age;
    })
  );
  let lowest = Math.min.apply(
    Math,
    array.map(function(obj) {
      return obj.age;
    })
  );

  return {
    highestAge: highest,
    lowestAge: lowest
  };
}
console.log(highestAndLowestAge(arrayOfObjects()));

/*
  QUESTÃO 4
*/
function smallerAndLargestName(array) {
  let smaller = array.reduce((a, b) => (a.name > b.name ? a : b));
  let largest = array.reduce((a, b) => (a.name < b.name ? a : b));

  return {
    smallerName: smaller,
    largestName: largest
  };
}
console.log(smallerAndLargestName(arrayOfObjects()));

/*
  QUESTÃO 5
*/
function chooseSort(choose, array) {
  if (choose === 1) return sortByName(array);
  else if (choose === 2) return sortByAge(array);
  else
    return {
      error: "INVALID CHOOSE!"
    };
}

console.log(chooseSort(1, arrayOfObjects()));
