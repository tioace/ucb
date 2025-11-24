import java.util.ArrayList;

public class Database {
    private ArrayList<User> users;

    public Database() {
        super();
        this.users = new ArrayList<User>();
    }

    public void adicionar(User usuario) {
        users.add(usuario);
    }

    public User mostrarUsuario(int posicao) {
        return users.get(posicao);
    }

    public int tamanho() {
        return users.size();
    }
}