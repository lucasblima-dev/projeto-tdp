const path = require('path');
const fs = require('fs');
const { exec } = require('child-process');

const TASK_C_FILE = path.join(__dirname, '...'); //Aqui vai buscar o arquivo principal
const TASK_EXECUTAVEL = path.join(__dirname, '...') //Aqui vai buscar o executável

//Aqui virá toda a configuração responsável por compilar o C e fazê-lo se comunicar com JS e vice versa