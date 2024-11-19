const express = require('express');
const router = express.Router();

router.get('/', async (req, res) => {
  try {
    const tasks = 'Testando';
    res.status(200).json({ tasks });
  } catch (error) {
    res.status(500).json({ error: 'Erro ao listar tarefas' });
  }
});

//GET Filtrado
//POST
//DELETE

module.exports = router;