// Global variables
let arrayOne = Array();
let arrayTwo = Array();
let number = Number();

// 1)
let createArray = amount => {
  for (let i = 0; i < amount; i++) {
    number = Math.trunc(Math.random() * (100 - 1) + 1);
    number % 2 == 0 ? arrayOne.push(number) : arrayTwo.push(number);
  }

  return (globalArray = [arrayOne, arrayTwo]);
};
console.log(createArray(10));

// 1.1)
let createArrayOfObject = amount => {
  for (let i = 0; i < amount; i++) {
    number = Math.trunc(Math.random() * (100 - 1) + 1);
    number % 2 == 0 ? arrayOne.push(number) : arrayTwo.push(number);
  }

  return {
    arrayEven: arrayOne,
    arrayOdd: arrayTwo
  };
};
console.log(createArrayOfObject(10));

// 2)
let evenDisruption = (arrayEven = [], arrayEvenLength) => {
  let newArray = [];

  for (let i = 3; i < arrayEvenLength; i++) newArray.push(arrayEven[i]);

  let [firstValue, secondValue, thirdValue, fourthValue] = [
    arrayEven[0],
    arrayEven[1],
    arrayEven[2],
    [...newArray]
  ];

  return {
    objectOfArray: {
      firstValue: firstValue,
      secondValue: secondValue,
      thirdValue: thirdValue,
      fourthValue: fourthValue
    }
  };
};
console.log(
  evenDisruption(
    createArrayOfObject().arrayEven,
    createArrayOfObject().arrayEven.length
  )
);

// 3)
let oddDisruption = (arrayOdd = [], arrayOddLength) => {
  let newArray = [];

  for (let i = 3; i < 7; i++) newArray.push(arrayOdd[i]);

  let [firstValue, secondValue, thirdValue] = [
    arrayOdd[0],
    arrayOdd[1],
    [...newArray]
  ];

  return {
    objectOfArray: {
      firstValue: firstValue,
      secondValue: secondValue,
      thirdValue: thirdValue
    }
  };
};
console.log(
  oddDisruption(
    createArrayOfObject().arrayOdd,
    createArrayOfObject().arrayOdd.length
  )
);

// 4)
let generateNewCombinationArray = () => {
  let newArray = [
    evenDisruption(
      createArrayOfObject().arrayEven,
      createArrayOfObject().arrayEven.length
    ).objectOfArray.fourthValue,
    oddDisruption(
      createArrayOfObject().arrayOdd,
      createArrayOfObject().arrayOdd.length
    ).objectOfArray.thirdValue
  ];

  return {
    newArray: newArray
  };
};
console.log(generateNewCombinationArray());

// 5)
let changeString = (nameOne, nameTwo, nameThree, nameFour) => {
    let originalArray = [nameOne, nameTwo, nameThree, nameFour]

    // Swapping
    nameOne = nameTwo
    nameTwo = nameThree
    nameThree = nameFour
    nameFour = nameOne

    let swappedArray = [nameOne, nameTwo, nameThree, nameFour]

    return {
        originalArray: originalArray,
        swappedArray: swappedArray
    }
}
console.log(changeString('pedro', 'joao', 'maria', 'ana'))

// 6)
let createObject = () => {
    let object = {
        name: 'pedro',
        email: 'pedro@email.com',
        age: 19,
        country: {
            name: 'brazil',
            state: { name: 'Espirito Santo'},
            city: { name: 'Vila Velha' }
        },
        pet: {
            type: 'dog',
            race: 'pitbull' ,
            name: 'bob'
        }
    }

    return {
        fullCountry: object.country,
        fullPet: object.pet
    }
}

console.log(createObject())