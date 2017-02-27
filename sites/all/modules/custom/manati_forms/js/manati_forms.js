
(function ($) { 
   Drupal.behaviors.manati_forms = {
    attach: function(context, settings) {
    
      // If change link value field and the fields link value or seo total posts is not empy and number total post is not empty
      // set seo total post field to number total posts value.
      $("#edit-field-formacion").hide()
       $("#edit-field-horario-art").hide()
	if($("#edit-field-tipo-actividad-und-0-tid").val() == 8){
             $("#edit-field-formacion").show(2000)
           }
          else if($("#edit-field-tipo-actividad-und-0-tid").val() == 18){
              $("#edit-field-horario-art").show(2000)
            }

	  $("#edit-field-tipo-actividad").bind("click", function(){
	      if($("#edit-field-tipo-actividad-und-0-tid").val() == 8 || $("#edit-field-tipo-actividad-und-0-tid").val() == 9 || $("#edit-field-tipo-actividad-und-0-tid").val() == 10 || $("#edit-field-tipo-actividad-und-0-tid").val() == 11 || $("#edit-field-tipo-actividad-und-0-tid").val() == 12 || $("#edit-field-tipo-actividad-und-0-tid").val() == 13 || $("#edit-field-tipo-actividad-und-0-tid").val() == 14 || $("#edit-field-tipo-actividad-und-0-tid").val() == 15 || $("#edit-field-tipo-actividad-und-0-tid").val() == 16 || $("#edit-field-tipo-actividad-und-0-tid").val() == 17 ){
             //alert($("#edit-field-actividad-und-0-tid").val());
	      $("#edit-field-formacion").show(2000)
	       $("#edit-field-horario-art").hide()
	      }
	      else if($("#edit-field-tipo-actividad-und-0-tid").val() == 18 || $("#edit-field-tipo-actividad-und-0-tid").val() == 19 || $("#edit-field-tipo-actividad-und-0-tid").val() == 20 || $("#edit-field-tipo-actividad-und-0-tid").val() == 21 || $("#edit-field-tipo-actividad-und-0-tid").val() == 22 || $("#edit-field-tipo-actividad-und-0-tid").val() == 23 || $("#edit-field-tipo-actividad-und-0-tid").val() == 24 || $("#edit-field-tipo-actividad-und-0-tid").val() == 25 ){
	      $("#edit-field-horario-art").show(2000)
	       $("#edit-field-formacion").hide()
	       }
	      else{
		  $("#edit-field-formacion").hide()
		   $("#edit-field-horario-art").hide()
	      }
	    });


    } // attach
  } // behaviours

})(jQuery);


