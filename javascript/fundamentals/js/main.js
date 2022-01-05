import { validaPesoEAltura } from "./modules/calculaImc.js";
import { adicionaNovoPaciente } from "./modules/form.js";
import { deletarPaciente } from "./modules/deletaPaciente.js";
import { editarPaciente } from "./modules/editaPaciente.js";

function inicializaApp() {
  validaPesoEAltura();
  adicionaNovoPaciente();
  deletarPaciente();
  editarPaciente();
}

inicializaApp();
