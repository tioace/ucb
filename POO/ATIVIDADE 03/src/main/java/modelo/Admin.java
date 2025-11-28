package modelo;

import javax.persistence.*;

@Entity
@DiscriminatorValue("ADMIN")
public class Admin extends User {
    
    @Column(name = "security_token")
    private String securityToken;
    
    public Admin() {
        // Construtor padrão para Hibernate
    }
    
    public Admin(String username, String password, String securityToken) {
        super(username, password);
        this.securityToken = securityToken;
    }
    
    public String getSecurityToken() {
        return securityToken;
    }
    
    public void setSecurityToken(String securityToken) {
        this.securityToken = securityToken;
    }
    
    @Override
    public String toString() {
        return "Admin[Username=" + getUsername() + ", Password=" + getPassword() + 
               ", SecurityToken=" + securityToken + "]";
    }
}