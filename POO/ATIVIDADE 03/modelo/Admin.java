public class Admin extends User {
    private String securityToken;

    public Admin(String nome, String senha, String token) {
        super(nome, senha);
        this.setSecurityToken(token);
    }

    public void setSecurityToken(String token) {
        this.securityToken = token;
    }

    public String getSecurityToken() {
        return this.securityToken;
    }

    public String toString() {
        String t = "Admin[Username= " + this.getUsername() + "  Password = " + this.getPassword() + "  SecurityToken = "
                + this.securityToken + "]";
        return t;
    }
}