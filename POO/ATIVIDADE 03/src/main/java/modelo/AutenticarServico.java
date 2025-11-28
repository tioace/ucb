package modelo; 

import dao.UserDAO;


public class AutenticarServico {

    private User atualUsuario;
    private final UserDAO userDAO;

    public AutenticarServico(UserDAO userDAO) {
        this.userDAO = userDAO;
    }

    public boolean login(String username, String password) {
        try {
            User user = userDAO.findByUsername(username);

            if (user == null) {
                System.out.println("Usuário não encontrado.");
                return false;
            }

            if (!user.getPassword().equals(password)) {
                System.out.println("Senha incorreta.");
                return false;
            }

            atualUsuario = user;
            System.out.println("Login bem-sucedido! Usuário: " + username);
            return true;

        } catch (Exception e) {
            System.out.println("Erro no login: " + e.getMessage());
            return false;
        }
    }

    public void logout() {
        if (atualUsuario != null) {
            System.out.println("Usuário " + atualUsuario.getUsername() + " saiu.");
        }
        atualUsuario = null;
    }

    public boolean isTemporaryAdmin() {
        return atualUsuario instanceof TemporaryAdmin;
    }

    public boolean isAdmin() {
        return atualUsuario instanceof Admin;
    }

    public boolean isAuthenticated() {
        return atualUsuario != null;
    }

    public User getAtualUsuario() {
        return atualUsuario;
    }
}
