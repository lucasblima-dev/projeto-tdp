const express = require('express');

const app = express();
const PORT = 3581;

app.use(express.json());

app.listen(PORT, () => {
  console.log(`Servidor rodando em: http://localhost:${PORT}`);
})