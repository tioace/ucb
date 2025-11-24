public class TemporaryAdmin extends User {
    private String securityToken;

    public TemporaryAdmin(String nome, String senha, String token) {
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
        String t = "TemporaryAdmin[Username = " + this.getUsername() + "  Password = " + this.getPassword()
                + "  SecurityToken = " + this.securityToken + "]";
        return t;
    }
}