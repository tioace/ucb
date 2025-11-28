package modelo;

import javax.persistence.*;

@Entity
@DiscriminatorValue("TEMPORARY_ADMIN")
public class TemporaryAdmin extends User {
    
    @Column(name = "security_token")
    private String securityToken;
    
    public TemporaryAdmin() {
        // Construtor padrão para Hibernate
    }
    
    public TemporaryAdmin(String username, String password, String securityToken) {
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
        return "TemporaryAdmin[Username=" + getUsername() + ", Password=" + getPassword() + 
               ", SecurityToken=" + securityToken + "]";
    }
}