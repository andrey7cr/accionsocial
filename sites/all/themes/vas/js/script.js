(function ($) {

  Drupal.behaviors.accordionCustom = {
    attach: function(context, settings) {
    	$('.accordion-custom').once('accordion-custom').accordion({
    		header: "h3",
    		collapsible: true,
    		active: false,
    		autoHeight: false,
    		heightStyle: "content"
    	});
    	// Settings específicos para acordeón de Acción Social
    	$('.accordion-accion-social').accordion("option", "active", 0);
    }
  }

  Drupal.behaviors.gestionProyectos = {
    attach: function(content, settings) {
        $('.fase').hide();
        $('.button-fase').once('button-fase').click(function() {
            var id_fase = $(this).attr('id').slice(-1);
            $('.fase').hide();
            $('#fase-' + id_fase.toString()).show();
            return false;
        });
    }
  }

})(jQuery);