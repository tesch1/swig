import callback.*

if (foo(2) != 2)
  error('FAILED!!')
end

if (A_bar(2) != 4)
  error('FAILED!!')
end

if (foobar(3, _callback.foo) != foo(3))
  error('FAILED!!')  
end

if (foobar(3, foo) != foo(3))
  error('FAILED!!')  
end

if (foobar(3, A_bar) != A_bar(3))
  error('FAILED!!')
end

if (foobar(3, foof) != foof(3))
  error('FAILED!!')
end

if (foobar_i(3, foo_i) != foo_i(3))
  error('FAILED!!')
end


if (foobar_d(3.5, foo_d) != foo_d(3.5))
  error('FAILED!!')
end

a = A();
if (foobarm(3, a, A.foom_cb_ptr) != a.foom(3))
  error('FAILED!!')
end

