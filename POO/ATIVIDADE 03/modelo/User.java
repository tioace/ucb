public class User {
    private String username;
    private String password;

    public User(String nome, String senha) {
        super();
        this.username = nome;
        this.password = senha;
    }

    public void setUsername(String nome) {
        this.username = nome;
    }

    public String getUsername() {
        return this.username;
    }

    public void setPassword(String senha) {
        this.password = senha;
    }

    public String getPassword() {
        return this.password;
    }

    public String toString() {
        String t = "USER[Username = " + this.username + "  Password = " + this.password + "]";
        return t;
    }
}