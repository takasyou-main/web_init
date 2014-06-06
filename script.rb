# coding: utf-8
=begin
a=10
b=20
c=a+b
puts("a+b="+ c.to_s)
a=3734
hour=a/3600
tmp_a=a-3600*hour
minite=tmp_a/60
tmp_a-=60*minite
second=tmp_a
puts(hour.to_s + ':' + minite.to_s + ':' + second.to_s)
puts("終わり")

sum_second=minite*60+hour*3600+second
puts(sum_second)

=end

m=201
n=1000
puts('m=' + m.to_s + "\nn=" + n.to_s)

def math weight

    if weight<100 
       return 1000
    end

    if weight<=500 
       i=1
       while (weight-100)>i*100
       	     i+=1 
       end
       return i*500+1000
    end



    if weight<=1000 
        i=1
    	while (weight-500)>i*100
	      i+=1
	end 
    	return i*300+3000  
    end
    return -1
end

mprice=math(m)
nprice=math(n)
puts("mの配達料金は" + mprice.to_s + "円です")
puts("nの配達料金は" + nprice.to_s + "円です")
