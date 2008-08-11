#!/usr/bin/env ruby

require 'benchmark_setup'

File.open("#{File.basename(__FILE__, '.rb')}.dat", 'w') do |f|
  user = @users.first
  
  1001.times do |number_of_credentials|
    credential = @nm.create_credential(@server.server_id, user.pseudonym, number_of_credentials)
    
    f << "#{number_of_credentials}\t#{credential.marshall.size}\n"
    
    puts "#{Time.now}\t#{number_of_credentials}" if number_of_credentials % 100 == 0
  end
end