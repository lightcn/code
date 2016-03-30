require "socket"
require "timeout"

socket = TCPSocket.open('www.yundianjia.com', '80') do |socket|
  socket.puts "GET / HTTP/1.0\n\n"
  puts socket.read
end

begin
  Timeout::timeout(5) do
    TCPSocket.open("www.google.com", 80) do |socket|
      puts socket.read
    end
  end
  rescue
    puts "Something Wrong"
end
