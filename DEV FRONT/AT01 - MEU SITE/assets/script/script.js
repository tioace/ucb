let menu = document.querySelector('.menu');
let header = document.querySelector('header');

menu.onclick = function(){
    header.classList.toggle('active');
}


document.addEventListener('click', function(e) {
    if (window.innerWidth <= 900) {
        if (e.target.textContent.includes('Cursos')) {
            e.preventDefault();
            let li = e.target.parentElement;
            li.classList.toggle('active');
        }
        
        if (e.target.closest('header nav ul li ul')) {
            header.classList.remove('active');
            let itemAtivo = document.querySelector('header nav ul li.active');
            if (itemAtivo) {
                itemAtivo.classList.remove('active');
            }
        }
    }
});