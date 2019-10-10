/*let f=flag*/let c=[], x=0, y=0, z=0, b=Buffer.from(f).toString("base64").split("");do{do{c[z]=b[x+y*4];y++;z++;}while(y<11);x++;y=0;}while(x<4);console.log(c.join(""));
