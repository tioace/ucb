*** Settings ***
Library  SeleniumLibrary

*** Variables ***
${Google}   https://www.google.com/  
${checkbox-demo}  https://www.testmuai.com/selenium-playground/checkbox-demo/  
${bootstrap}  https://www.testmuai.com/selenium-playground/bootstrap-dual-list-box-demo/

${checkboxSingleDemo}  xpath=//input[@type='checkbox'] 
${text-checked}  xpath=//div[@id='__next']/div/main/div/section/div/div/div/p

${Mynamaki}  xpath=//div[@id='__next']/div/main/section[2]/div/div/div/div/div/div/div/ul/li[3]
${Danville}  xpath=//div[@id='__next']/div/main/section[2]/div/div/div/div/div/div/div/ul/li[2]
${Kedungjenar}  xpath=//div[@id='__next']/div/main/section[2]/div/div/div/div/div/div/div/ul/li
${boxSearch}  name=SearchDualList

*** Test Cases ***
Teste de pesquisa por Kedunjnar e verifica 
  Open Browser  ${bootstrap}  firefox
  Sleep  2s
  Input Text  ${boxSearch}  Kedungjenar
  Wait Until Element Is Visible  ${Kedungjenar}  10s
  Close Browser

Teste de pesquisa por Kedunjnar e segunda opcao nao visivel
  Open Browser  ${bootstrap}  firefox
  Sleep  2s
  Input Text  ${boxSearch}  Kedungjenar
  Wait Until Element Is Not Visible  ${Danville}
  Close Browser

Teste de pesquisa por Kedunjnar e terceira opcao nao visivel
  Open Browser  ${bootstrap}  firefox
  Sleep  2s
  Input Text  ${boxSearch}  Kedungjenar
  Wait Until Element Is Not Visible  ${Mynamaki}  10s
  Close Browser


Teste de pesquisa por Kedunjnar e manter Kedungjenar
  Skip
  Open Browser  ${bootstrap}  firefox
  Sleep  2s
  Input Text  ${boxSearch}  Kedungjenar
  Sleep  1s
  Element Should Be Visible  ${Kedungjenar}
  Element Should Not Be Visible  ${Danville}
  Element Should Not Be Visible  ${Mynamaki}
  Sleep  2s
  Close Browser
  

Teste de mensagem de alerta
  Skip
  Open Browser  ${checkbox-demo}  firefox
  Sleep  2s
  Click Element  ${checkboxSingleDemo}
  Element Text Should Be  ${text-checked}  Checked!
  Sleep  2s
  Close Browser

Teste de seleção de checbox
  Skip
  Open Browser  ${checkbox-demo}  firefox
  Sleep  2s
  Click Element  ${checkboxSingleDemo}
  Checkbox Should Be Selected  ${checkboxSingleDemo}
  Sleep  2s
  Close Browser

Teste do Google.com
  Skip
  Open Browser  ${Google}  firefox
  Sleep  2s
  ${title}=  Get Title
  Should Contain  ${title}  Google
  Close Browser