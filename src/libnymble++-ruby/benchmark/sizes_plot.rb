#!/usr/bin/env ruby

require 'plot_setup'

Gnuplot.open do |gp|
  Gnuplot::Plot.new(gp) do |plot|
    plot.output   "nymble_performance_size.pdf"
    plot.terminal 'pdf fsize 11'
    #plot.title    'Nymble Data Structures'
    plot.ylabel   'Size (KB)'
    plot.xlabel   'Number of Entries'
    plot.xrange   '[0:1000]'
    plot.yrange   '[0:205]'
    plot.key      'top left'
    
    plot.data << graph('blacklist_update_request_size_benchmark.rb.dat', 'Blacklist update request', 1.0/1024)
    plot.data << graph('credential_size_benchmark.rb.dat', 'Credential', 1.0/1024)
    plot.data << graph('blacklist_update_response_size_benchmark.rb.dat', 'Blacklist update response', 1.0/1024)
    plot.data << graph('blacklist_size_benchmark.rb.dat', 'Blacklist', 1.0/1024)
  end
end
