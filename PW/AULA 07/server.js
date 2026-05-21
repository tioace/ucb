const express = require('express')
const app = express()
const port = 3000

const db = require('./db'); 

const path = require('path')
app.use(express.static(path.join(__dirname, 'public')));

app.get('/', (req, res) => {
  //res.send('Hello World!')
  res.sendFile(path.join(__dirname, 'public', 'index.html'));
})

app.listen(port, () => {
  console.log(`Servidor funcionando ${port}`)
})

